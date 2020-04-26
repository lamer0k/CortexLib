// Filename: interrupthandler.s
// Created by by Sergey aka Lamerok on 14.03.2020.

  RSEG CODE:CODE:NOROOT(2)

  PUBLIC  HandlePendSv
  PUBLIC  HandleSvc

  EXTERN  Schedule

; ISR executes in Handler mode, but scheduling should be performed in Thread
; mode. This handler reserves space for exception stack frame and switches to 
; Thread mode by exception-returning to TaskerSchedule function
HandlePendSv: 

  ; Set PendSvClr bit in Interrupt Control and State Register
  LDR     r3,=0xE000ED04
  LDR     r1,=1<<27
  ; Disable interrupts
  CPSID   i
  ; The PendSV exception handler can be preempted by an interrupt,
  ; which might pend PendSV exception again. The following write to
  ; ICSR[27] un-pends any such spurious instance of PendSV.
  STR     r1,[r3]
  ; New XPSR value is (1 << 24) (T bit)
  LDR     r3,=1<<24           
  ; New PC value is TaskerSchedule address aligned at halfword
  ; Адрес возврата должен быть четным 
  LDR     r2,=Schedule - 1
  ; New LR value is ScheduleReturn address
  LDR     r1,=ScheduleReturn
  ; Reserve space for exception stack frame
  SUB     sp,sp,#8*4            
  ADD     r0,sp,#5*4
  ; Save XPSR, PC, LR
  STM     r0!,{r1-r3}           
  ; r0 = 0xFFFFFFF9 - Thread mode
  LDR     r0,=0xFFFFFFF9              
  ; Exception-return to the TaskerSchedule
  BX      r0

; Raises SVC to return back to preempted thread
ScheduleReturn:
  ; Enable interrupts
  CPSIE   i
  ; SVC will be executed together with CPSIE becuase Cortext M0 has 2 stage pipeline
  SVC #0
  
; Returns back to thread that has been interrupted by PendSV exception
HandleSvc:
  ; Remove SVC exception frame; we need to use PendSV exception frame
  ADD     sp,sp,#(8*4)
  ; Return back to thread interrupted by PendSV
  BX      lr
  END