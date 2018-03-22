/*
 * IRIX syscalls are in the range from 1000 to 1999.
 */
#define TARGET_NR_Linux			1000
#define TARGET_NR_syscall		(TARGET_NR_Linux +   0)
#define TARGET_NR_exit			(TARGET_NR_Linux +   1)
#define TARGET_NR_fork			(TARGET_NR_Linux +   2)
#define TARGET_NR_read			(TARGET_NR_Linux +   3)
#define TARGET_NR_write			(TARGET_NR_Linux +   4)
#define TARGET_NR_open			(TARGET_NR_Linux +   5)
#define TARGET_NR_close			(TARGET_NR_Linux +   6)
#define TARGET_NR_waitpid		(TARGET_NR_Linux +   7)
#define TARGET_NR_creat			(TARGET_NR_Linux +   8)
#define TARGET_NR_link			(TARGET_NR_Linux +   9)
#define TARGET_NR_unlink		(TARGET_NR_Linux +  10)
#define TARGET_NR_execv 		(TARGET_NR_Linux +  11)
#define TARGET_NR_chdir			(TARGET_NR_Linux +  12)
#define TARGET_NR_time			(TARGET_NR_Linux +  13)
#define TARGET_NR_mknod			(TARGET_NR_Linux +  14)
#define TARGET_NR_chmod			(TARGET_NR_Linux +  15)
#define TARGET_NR_lchown		(TARGET_NR_Linux +  16)
#define TARGET_NR_brk			(TARGET_NR_Linux +  17)
#define TARGET_NR_unused18		(TARGET_NR_Linux +  18)
#define TARGET_NR_lseek			(TARGET_NR_Linux +  19)
#define TARGET_NR_getpid		(TARGET_NR_Linux +  20)
#define TARGET_NR_mount			(TARGET_NR_Linux +  21)
#define TARGET_NR_umount		(TARGET_NR_Linux +  22)
#define TARGET_NR_setuid		(TARGET_NR_Linux +  23)
#define TARGET_NR_getuid		(TARGET_NR_Linux +  24)
#define TARGET_NR_stime			(TARGET_NR_Linux +  25)
#define TARGET_NR_ptrace		(TARGET_NR_Linux +  26)
#define TARGET_NR_alarm			(TARGET_NR_Linux +  27)
#define TARGET_NR_fstat 		(TARGET_NR_Linux +  28)
#define TARGET_NR_pause			(TARGET_NR_Linux +  29)
#define TARGET_NR_utime			(TARGET_NR_Linux +  30)
#define TARGET_NR_stty			(TARGET_NR_Linux +  31)
#define TARGET_NR_gtty			(TARGET_NR_Linux +  32)
#define TARGET_NR_access		(TARGET_NR_Linux +  33)
#define TARGET_NR_nice			(TARGET_NR_Linux +  34)
#define TARGET_NR_ftime			(TARGET_NR_Linux +  35)
#define TARGET_NR_sync			(TARGET_NR_Linux +  36)
#define TARGET_NR_kill			(TARGET_NR_Linux +  37)
#define TARGET_NR_rename		(TARGET_NR_Linux +  38)
#define TARGET_NR_mkdir			(TARGET_NR_Linux +  39)
#define TARGET_NR_syssgi		(TARGET_NR_Linux +  40)
#define TARGET_NR_dup			(TARGET_NR_Linux +  41)
#define TARGET_NR_pipe			(TARGET_NR_Linux +  42)
#define TARGET_NR_times			(TARGET_NR_Linux +  43)
#define TARGET_NR_prof			(TARGET_NR_Linux +  44)
//#define TARGET_NR_brk			(TARGET_NR_Linux +  45)
#define TARGET_NR_setgid		(TARGET_NR_Linux +  46)
#define TARGET_NR_getgid		(TARGET_NR_Linux +  47)
#define TARGET_NR_signal		(TARGET_NR_Linux +  48)
#define TARGET_NR_geteuid		(TARGET_NR_Linux +  49)
#define TARGET_NR_getegid		(TARGET_NR_Linux +  50)
#define TARGET_NR_acct			(TARGET_NR_Linux +  51)
#define TARGET_NR_umount2		(TARGET_NR_Linux +  52)
#define TARGET_NR_lock			(TARGET_NR_Linux +  53)
#define TARGET_NR_ioctl			(TARGET_NR_Linux +  54)
//#define TARGET_NR_fcntl			(TARGET_NR_Linux +  55)
#define TARGET_NR_sysmp			(TARGET_NR_Linux +  56)
#define TARGET_NR_setpgid		(TARGET_NR_Linux +  57)
//#define TARGET_NR_ulimit		(TARGET_NR_Linux +  58)
#define TARGET_NR_execve		(TARGET_NR_Linux +  59)
#define TARGET_NR_umask			(TARGET_NR_Linux +  60)
#define TARGET_NR_chroot		(TARGET_NR_Linux +  61)
#define TARGET_NR_fcntl			(TARGET_NR_Linux +  62)
#define TARGET_NR_ulimit			(TARGET_NR_Linux +  63)
#define TARGET_NR_getppid		(TARGET_NR_Linux +  64)
#define TARGET_NR_getpgrp		(TARGET_NR_Linux +  65)
#define TARGET_NR_setsid		(TARGET_NR_Linux +  66)
//#define TARGET_NR_sigaction		(TARGET_NR_Linux +  67)
#define TARGET_NR_sgetmask		(TARGET_NR_Linux +  68)
#define TARGET_NR_ssetmask		(TARGET_NR_Linux +  69)
#define TARGET_NR_setreuid		(TARGET_NR_Linux +  70)
#define TARGET_NR_setregid		(TARGET_NR_Linux +  71)
#define TARGET_NR_sigsuspend		(TARGET_NR_Linux +  72)
#define TARGET_NR_sigpending		(TARGET_NR_Linux +  73)
#define TARGET_NR_sethostname		(TARGET_NR_Linux +  74)
#define TARGET_NR_setrlimit		(TARGET_NR_Linux +  75)
#define TARGET_NR_getrlimit		(TARGET_NR_Linux +  76)
#define TARGET_NR_getrusage		(TARGET_NR_Linux +  77)
#define TARGET_NR_gettimeofday		(TARGET_NR_Linux +  78)
#define TARGET_NR_rmdir		(TARGET_NR_Linux +  79)
#define TARGET_NR_getgroups		(TARGET_NR_Linux +  80)
#define TARGET_NR_setgroups		(TARGET_NR_Linux +  81)
#define TARGET_NR_reserved82		(TARGET_NR_Linux +  82)
#define TARGET_NR_symlink		(TARGET_NR_Linux +  83)
#define TARGET_NR_unused84		(TARGET_NR_Linux +  84)
#define TARGET_NR_readlink		(TARGET_NR_Linux +  85)
#define TARGET_NR_uselib		(TARGET_NR_Linux +  86)
#define TARGET_NR_swapon		(TARGET_NR_Linux +  87)
#define TARGET_NR_reboot		(TARGET_NR_Linux +  88)
#define TARGET_NR_readdir		(TARGET_NR_Linux +  89)
//#define TARGET_NR_mmap			(TARGET_NR_Linux +  90)
#define TARGET_NR_munmap		(TARGET_NR_Linux +  91)
#define TARGET_NR_truncate		(TARGET_NR_Linux +  92)
#define TARGET_NR_ftruncate		(TARGET_NR_Linux +  93)
#define TARGET_NR_fchmod		(TARGET_NR_Linux +  94)
#define TARGET_NR_fchown		(TARGET_NR_Linux +  95)
#define TARGET_NR_getpriority		(TARGET_NR_Linux +  96)
#define TARGET_NR_setpriority		(TARGET_NR_Linux +  97)
#define TARGET_NR_profil		(TARGET_NR_Linux +  98)
#define TARGET_NR_statfs		(TARGET_NR_Linux +  99)
#define TARGET_NR_fstatfs		(TARGET_NR_Linux + 100)
#define TARGET_NR_ioperm		(TARGET_NR_Linux + 101)
#define TARGET_NR_socketcall		(TARGET_NR_Linux + 102)
#define TARGET_NR_syslog		(TARGET_NR_Linux + 103)
#define TARGET_NR_setitimer		(TARGET_NR_Linux + 104)
#define TARGET_NR_getitimer		(TARGET_NR_Linux + 105)
#define TARGET_NR_stat			(TARGET_NR_Linux + 106)
#define TARGET_NR_lstat			(TARGET_NR_Linux + 107)
//#define TARGET_NR_fstat			(TARGET_NR_Linux + 108)
#define TARGET_NR_unused109		(TARGET_NR_Linux + 109)
#define TARGET_NR_iopl			(TARGET_NR_Linux + 110)
#define TARGET_NR_vhangup		(TARGET_NR_Linux + 111)
#define TARGET_NR_idle			(TARGET_NR_Linux + 112)
#define TARGET_NR_vm86			(TARGET_NR_Linux + 113)
#define TARGET_NR_wait4			(TARGET_NR_Linux + 114)
#define TARGET_NR_swapoff		(TARGET_NR_Linux + 115)
#define TARGET_NR_sysinfo		(TARGET_NR_Linux + 116)
#define TARGET_NR_ipc			(TARGET_NR_Linux + 117)
#define TARGET_NR_fsync			(TARGET_NR_Linux + 118)
#if defined(TARGET_ABI_MIPSO32)
#define TARGET_NR_sigreturn		(TARGET_NR_Linux + 119)
#endif
#define TARGET_NR_clone			(TARGET_NR_Linux + 120)
#define TARGET_NR_setdomainname		(TARGET_NR_Linux + 121)
#define TARGET_NR_uname			(TARGET_NR_Linux + 122)
#define TARGET_NR_modify_ldt		(TARGET_NR_Linux + 123)
#define TARGET_NR_adjtimex		(TARGET_NR_Linux + 124)
#define TARGET_NR_mprotect		(TARGET_NR_Linux + 125)
//#define TARGET_NR_sigprocmask		(TARGET_NR_Linux + 126)
#define TARGET_NR_create_module		(TARGET_NR_Linux + 127)
#define TARGET_NR_init_module		(TARGET_NR_Linux + 128)
#define TARGET_NR_delete_module		(TARGET_NR_Linux + 129)
#define TARGET_NR_prctl	(TARGET_NR_Linux + 130)
#define TARGET_NR_quotactl		(TARGET_NR_Linux + 131)
#define TARGET_NR_getpgid		(TARGET_NR_Linux + 132)
#define TARGET_NR_fchdir		(TARGET_NR_Linux + 133)
#define TARGET_NR_mmap		(TARGET_NR_Linux + 134)
#define TARGET_NR_sysfs			(TARGET_NR_Linux + 135)
#define TARGET_NR_personality		(TARGET_NR_Linux + 136)
#define TARGET_NR_afs_syscall		(TARGET_NR_Linux + 137) /* Syscall for Andrew File System */
#define TARGET_NR_setfsuid		(TARGET_NR_Linux + 138)
#define TARGET_NR_setfsgid		(TARGET_NR_Linux + 139)
#define TARGET_NR__llseek		(TARGET_NR_Linux + 140)
#define TARGET_NR_getdents		(TARGET_NR_Linux + 141)
#define TARGET_NR__newselect		(TARGET_NR_Linux + 142)
#define TARGET_NR_flock			(TARGET_NR_Linux + 143)
#define TARGET_NR_msync			(TARGET_NR_Linux + 144)
#define TARGET_NR_readv			(TARGET_NR_Linux + 145)
#define TARGET_NR_writev		(TARGET_NR_Linux + 146)
#define TARGET_NR_cacheflush		(TARGET_NR_Linux + 147)
#define TARGET_NR_cachectl		(TARGET_NR_Linux + 148)
#define TARGET_NR_sysmips		(TARGET_NR_Linux + 149)
#define TARGET_NR_unused150		(TARGET_NR_Linux + 150)
#define TARGET_NR_getsid		(TARGET_NR_Linux + 151)
#define TARGET_NR_fdatasync		(TARGET_NR_Linux + 152)
#define TARGET_NR__sysctl		(TARGET_NR_Linux + 153)
#define TARGET_NR_mlock			(TARGET_NR_Linux + 154)
#define TARGET_NR_munlock		(TARGET_NR_Linux + 155)
#define TARGET_NR_mlockall		(TARGET_NR_Linux + 156)
#define TARGET_NR_munlockall		(TARGET_NR_Linux + 157)

#define TARGET_NR_xstat        (TARGET_NR_Linux + 158)
#define TARGET_NR_fxstat        (TARGET_NR_Linux + 160)

#define TARGET_NR_sigaction     (TARGET_NR_Linux + 162)
#define TARGET_NR_sigprocmask   (TARGET_NR_Linux + 164)
/*
#define TARGET_NR_sched_setparam	(TARGET_NR_Linux + 158)
#define TARGET_NR_sched_getparam	(TARGET_NR_Linux + 159)
#define TARGET_NR_sched_setscheduler	(TARGET_NR_Linux + 160)
#define TARGET_NR_sched_getscheduler	(TARGET_NR_Linux + 161)
#define TARGET_NR_sched_yield		(TARGET_NR_Linux + 162)
#define TARGET_NR_sched_get_priority_max	(TARGET_NR_Linux + 163)
#define TARGET_NR_sched_get_priority_min	(TARGET_NR_Linux + 164)
#define TARGET_NR_sched_rr_get_interval	(TARGET_NR_Linux + 165)
*/
#define TARGET_NR_nanosleep		(TARGET_NR_Linux + 166)
#define TARGET_NR_mremap		(TARGET_NR_Linux + 167)
#define TARGET_NR_accept		(TARGET_NR_Linux + 168)
#define TARGET_NR_bind			(TARGET_NR_Linux + 169)
#define TARGET_NR_connect		(TARGET_NR_Linux + 170)
#define TARGET_NR_getpeername		(TARGET_NR_Linux + 171)
#define TARGET_NR_getsockname		(TARGET_NR_Linux + 172)
#define TARGET_NR_getsockopt		(TARGET_NR_Linux + 173)
#define TARGET_NR_listen		(TARGET_NR_Linux + 174)
#define TARGET_NR_recv			(TARGET_NR_Linux + 175)
#define TARGET_NR_recvfrom		(TARGET_NR_Linux + 176)
#define TARGET_NR_recvmsg		(TARGET_NR_Linux + 177)
#define TARGET_NR_send			(TARGET_NR_Linux + 178)
#define TARGET_NR_sendmsg		(TARGET_NR_Linux + 179)
#define TARGET_NR_sendto		(TARGET_NR_Linux + 180)
#define TARGET_NR_setsockopt		(TARGET_NR_Linux + 181)
#define TARGET_NR_shutdown		(TARGET_NR_Linux + 182)
#define TARGET_NR_socket		(TARGET_NR_Linux + 183)
#define TARGET_NR_socketpair		(TARGET_NR_Linux + 184)
#define TARGET_NR_setresuid		(TARGET_NR_Linux + 185)
#define TARGET_NR_getresuid		(TARGET_NR_Linux + 186)
#define TARGET_NR_query_module		(TARGET_NR_Linux + 187)
#define TARGET_NR_poll			(TARGET_NR_Linux + 188)
#define TARGET_NR_nfsservctl		(TARGET_NR_Linux + 189)
#define TARGET_NR_setresgid		(TARGET_NR_Linux + 190)
#define TARGET_NR_getresgid		(TARGET_NR_Linux + 191)
//#define TARGET_NR_prctl			(TARGET_NR_Linux + 192)
// not exactly sure what the rt_ and k prefixes are for.
// Based on the man pages, I think ksigprocmask (IRIX) is equivalent to rt_sigprocmask (Linux).
/*
#define TARGET_NR_rt_sigreturn		(TARGET_NR_Linux + 193)
#define TARGET_NR_rt_sigaction		(TARGET_NR_Linux + 194)
#define TARGET_NR_rt_sigprocmask	(TARGET_NR_Linux + 195)
#define TARGET_NR_rt_sigpending		(TARGET_NR_Linux + 196)
#define TARGET_NR_rt_sigtimedwait	(TARGET_NR_Linux + 197)
#define TARGET_NR_rt_sigqueueinfo	(TARGET_NR_Linux + 198)
#define TARGET_NR_rt_sigsuspend		(TARGET_NR_Linux + 199)
*/
#define TARGET_NR_rt_sigreturn		(TARGET_NR_Linux + 193)
#define TARGET_NR_rt_sigaction		(TARGET_NR_Linux + 194)
#define TARGET_NR_rt_sigprocmask	(TARGET_NR_Linux + 195)
#define TARGET_NR_rt_sigpending		(TARGET_NR_Linux + 196)
#define TARGET_NR_rt_sigtimedwait	(TARGET_NR_Linux + 197)
#define TARGET_NR_rt_sigqueueinfo	(TARGET_NR_Linux + 198)
#define TARGET_NR_rt_sigsuspend		(TARGET_NR_Linux + 199)

#define TARGET_NR_pread64		(TARGET_NR_Linux + 200)
#define TARGET_NR_pwrite64		(TARGET_NR_Linux + 201)
#define TARGET_NR_chown 		(TARGET_NR_Linux + 202)
#define TARGET_NR_getcwd		(TARGET_NR_Linux + 203)
#define TARGET_NR_capget		(TARGET_NR_Linux + 204)
#define TARGET_NR_capset		(TARGET_NR_Linux + 205)
#define TARGET_NR_sigaltstack		(TARGET_NR_Linux + 206)
#define TARGET_NR_sendfile		(TARGET_NR_Linux + 207)
#define TARGET_NR_getpmsg		(TARGET_NR_Linux + 208)
#define TARGET_NR_putpmsg		(TARGET_NR_Linux + 209)
#define TARGET_NR_mmap2			(TARGET_NR_Linux + 210)
#define TARGET_NR_truncate64		(TARGET_NR_Linux + 211)
#define TARGET_NR_ftruncate64		(TARGET_NR_Linux + 212)
#define TARGET_NR_stat64		(TARGET_NR_Linux + 213)
#define TARGET_NR_lstat64		(TARGET_NR_Linux + 214)
#define TARGET_NR_fstat64		(TARGET_NR_Linux + 215)
#define TARGET_NR_pivot_root		(TARGET_NR_Linux + 216)
#define TARGET_NR_mincore		(TARGET_NR_Linux + 217)
#define TARGET_NR_madvise		(TARGET_NR_Linux + 218)
#define TARGET_NR_getdents64		(TARGET_NR_Linux + 219)
#define TARGET_NR_fcntl64		(TARGET_NR_Linux + 220)
#define TARGET_NR_reserved221		(TARGET_NR_Linux + 221)
#define TARGET_NR_gettid		(TARGET_NR_Linux + 222)
#define TARGET_NR_readahead		(TARGET_NR_Linux + 223)
#define TARGET_NR_setxattr		(TARGET_NR_Linux + 224)
#define TARGET_NR_lsetxattr		(TARGET_NR_Linux + 225)
#define TARGET_NR_fsetxattr		(TARGET_NR_Linux + 226)
#define TARGET_NR_getxattr		(TARGET_NR_Linux + 227)
#define TARGET_NR_lgetxattr		(TARGET_NR_Linux + 228)
#define TARGET_NR_fgetxattr		(TARGET_NR_Linux + 229)
#define TARGET_NR_listxattr		(TARGET_NR_Linux + 230)
#define TARGET_NR_llistxattr		(TARGET_NR_Linux + 231)
#define TARGET_NR_flistxattr		(TARGET_NR_Linux + 232)
#define TARGET_NR_removexattr		(TARGET_NR_Linux + 233)
#define TARGET_NR_lremovexattr		(TARGET_NR_Linux + 234)
#define TARGET_NR_fremovexattr		(TARGET_NR_Linux + 235)
#define TARGET_NR_tkill			(TARGET_NR_Linux + 236)
#define TARGET_NR_sendfile64		(TARGET_NR_Linux + 237)
#define TARGET_NR_futex			(TARGET_NR_Linux + 238)
#define TARGET_NR_sched_setaffinity	(TARGET_NR_Linux + 239)
#define TARGET_NR_sched_getaffinity	(TARGET_NR_Linux + 240)
#define TARGET_NR_io_setup		(TARGET_NR_Linux + 241)
#define TARGET_NR_io_destroy		(TARGET_NR_Linux + 242)
#define TARGET_NR_io_getevents		(TARGET_NR_Linux + 243)
#define TARGET_NR_io_submit		(TARGET_NR_Linux + 244)
#define TARGET_NR_io_cancel		(TARGET_NR_Linux + 245)
#define TARGET_NR_exit_group		(TARGET_NR_Linux + 246)
#define TARGET_NR_lookup_dcookie	(TARGET_NR_Linux + 247)
#define TARGET_NR_epoll_create		(TARGET_NR_Linux + 248)
#define TARGET_NR_epoll_ctl		(TARGET_NR_Linux + 249)
#define TARGET_NR_epoll_wait		(TARGET_NR_Linux + 250)
#define TARGET_NR_remap_file_pages	(TARGET_NR_Linux + 251)
#define TARGET_NR_set_tid_address	(TARGET_NR_Linux + 252)
#define TARGET_NR_restart_syscall	(TARGET_NR_Linux + 253)
#define TARGET_NR_fadvise64_64          (TARGET_NR_Linux + 254)
#define TARGET_NR_statfs64		(TARGET_NR_Linux + 255)
#define TARGET_NR_fstatfs64		(TARGET_NR_Linux + 256)
#define TARGET_NR_timer_create		(TARGET_NR_Linux + 257)
#define TARGET_NR_timer_settime		(TARGET_NR_Linux + 258)
#define TARGET_NR_timer_gettime		(TARGET_NR_Linux + 259)
#define TARGET_NR_timer_getoverrun	(TARGET_NR_Linux + 260)
#define TARGET_NR_timer_delete		(TARGET_NR_Linux + 261)
#define TARGET_NR_clock_settime		(TARGET_NR_Linux + 262)
#define TARGET_NR_clock_gettime		(TARGET_NR_Linux + 263)
#define TARGET_NR_clock_getres		(TARGET_NR_Linux + 264)
#define TARGET_NR_clock_nanosleep	(TARGET_NR_Linux + 265)
#define TARGET_NR_tgkill		(TARGET_NR_Linux + 266)
#define TARGET_NR_utimes		(TARGET_NR_Linux + 267)
#define TARGET_NR_mbind			(TARGET_NR_Linux + 268)
#define TARGET_NR_get_mempolicy		(TARGET_NR_Linux + 269)
#define TARGET_NR_set_mempolicy		(TARGET_NR_Linux + 270)
#define TARGET_NR_mq_open		(TARGET_NR_Linux + 271)
#define TARGET_NR_mq_unlink		(TARGET_NR_Linux + 272)
#define TARGET_NR_mq_timedsend		(TARGET_NR_Linux + 273)
#define TARGET_NR_mq_timedreceive	(TARGET_NR_Linux + 274)
#define TARGET_NR_mq_notify		(TARGET_NR_Linux + 275)
#define TARGET_NR_mq_getsetattr		(TARGET_NR_Linux + 276)
#define TARGET_NR_vserver		(TARGET_NR_Linux + 277)
#define TARGET_NR_waitid		(TARGET_NR_Linux + 278)
/* #define TARGET_NR_sys_setaltroot	(TARGET_NR_Linux + 279) */
#define TARGET_NR_add_key		(TARGET_NR_Linux + 280)
#define TARGET_NR_request_key		(TARGET_NR_Linux + 281)
#define TARGET_NR_keyctl		(TARGET_NR_Linux + 282)
#define TARGET_NR_set_thread_area	(TARGET_NR_Linux + 283)
#define TARGET_NR_inotify_init		(TARGET_NR_Linux + 284)
#define TARGET_NR_inotify_add_watch	(TARGET_NR_Linux + 285)
#define TARGET_NR_inotify_rm_watch	(TARGET_NR_Linux + 286)
#define TARGET_NR_migrate_pages		(TARGET_NR_Linux + 287)
#define TARGET_NR_openat		(TARGET_NR_Linux + 288)
#define TARGET_NR_mkdirat		(TARGET_NR_Linux + 289)
#define TARGET_NR_mknodat		(TARGET_NR_Linux + 290)
#define TARGET_NR_fchownat		(TARGET_NR_Linux + 291)
#define TARGET_NR_futimesat		(TARGET_NR_Linux + 292)
#define TARGET_NR_fstatat64		(TARGET_NR_Linux + 293)
#define TARGET_NR_unlinkat		(TARGET_NR_Linux + 294)
#define TARGET_NR_renameat		(TARGET_NR_Linux + 295)
#define TARGET_NR_linkat		(TARGET_NR_Linux + 296)
#define TARGET_NR_symlinkat		(TARGET_NR_Linux + 297)
#define TARGET_NR_readlinkat		(TARGET_NR_Linux + 298)
#define TARGET_NR_fchmodat		(TARGET_NR_Linux + 299)
#define TARGET_NR_faccessat		(TARGET_NR_Linux + 300)
#define TARGET_NR_pselect6		(TARGET_NR_Linux + 301)
#define TARGET_NR_ppoll			(TARGET_NR_Linux + 302)
#define TARGET_NR_unshare		(TARGET_NR_Linux + 303)
#define TARGET_NR_splice		(TARGET_NR_Linux + 304)
#define TARGET_NR_sync_file_range	(TARGET_NR_Linux + 305)
#define TARGET_NR_tee			(TARGET_NR_Linux + 306)
#define TARGET_NR_vmsplice		(TARGET_NR_Linux + 307)
#define TARGET_NR_move_pages		(TARGET_NR_Linux + 308)
#define TARGET_NR_set_robust_list	(TARGET_NR_Linux + 309)
#define TARGET_NR_get_robust_list	(TARGET_NR_Linux + 310)
#define TARGET_NR_kexec_load		(TARGET_NR_Linux + 311)
#define TARGET_NR_getcpu		(TARGET_NR_Linux + 312)
#define TARGET_NR_epoll_pwait		(TARGET_NR_Linux + 313)
#define TARGET_NR_ioprio_set		(TARGET_NR_Linux + 314)
#define TARGET_NR_ioprio_get		(TARGET_NR_Linux + 315)
#define TARGET_NR_utimensat		(TARGET_NR_Linux + 316)
#define TARGET_NR_signalfd		(TARGET_NR_Linux + 317)
#define TARGET_NR_timerfd		(TARGET_NR_Linux + 318)
#define TARGET_NR_eventfd		(TARGET_NR_Linux + 319)
#define TARGET_NR_fallocate		(TARGET_NR_Linux + 320)
#define TARGET_NR_timerfd_create	(TARGET_NR_Linux + 321)
#define TARGET_NR_timerfd_gettime	(TARGET_NR_Linux + 322)
#define TARGET_NR_timerfd_settime	(TARGET_NR_Linux + 323)
#define TARGET_NR_signalfd4		(TARGET_NR_Linux + 324)
#define TARGET_NR_eventfd2		(TARGET_NR_Linux + 325)
#define TARGET_NR_epoll_create1	(TARGET_NR_Linux + 326)
#define TARGET_NR_dup3			(TARGET_NR_Linux + 327)
#define TARGET_NR_pipe2		(TARGET_NR_Linux + 328)
#define TARGET_NR_inotify_init1	(TARGET_NR_Linux + 329)
#define TARGET_NR_preadv                (TARGET_NR_Linux + 330)
#define TARGET_NR_pwritev               (TARGET_NR_Linux + 331)
#define TARGET_NR_rt_tgsigqueueinfo     (TARGET_NR_Linux + 332)
#define TARGET_NR_perf_event_open       (TARGET_NR_Linux + 333)
#define TARGET_NR_accept4               (TARGET_NR_Linux + 334)
#define TARGET_NR_recvmmsg              (TARGET_NR_Linux + 335)
#define TARGET_NR_fanotify_init         (TARGET_NR_Linux + 336)
#define TARGET_NR_fanotify_mark         (TARGET_NR_Linux + 337)
#define TARGET_NR_prlimit64             (TARGET_NR_Linux + 338)
#define TARGET_NR_name_to_handle_at     (TARGET_NR_Linux + 339)
#define TARGET_NR_open_by_handle_at     (TARGET_NR_Linux + 340)
#define TARGET_NR_clock_adjtime         (TARGET_NR_Linux + 341)
#define TARGET_NR_syncfs                (TARGET_NR_Linux + 342)
#define TARGET_NR_sendmmsg              (TARGET_NR_Linux + 343)
#define TARGET_NR_setns                 (TARGET_NR_Linux + 344)
#define TARGET_NR_process_vm_readv      (TARGET_NR_Linux + 345)
#define TARGET_NR_process_vm_writev     (TARGET_NR_Linux + 346)
#define TARGET_NR_kcmp                  (TARGET_NR_Linux + 347)
#define TARGET_NR_finit_module          (TARGET_NR_Linux + 348)

#define TARGET_NR_sched_setattr         (TARGET_NR_Linux + 349)
#define TARGET_NR_sched_getattr         (TARGET_NR_Linux + 350)
#define TARGET_NR_renameat2             (TARGET_NR_Linux + 351)
#define TARGET_NR_seccomp               (TARGET_NR_Linux + 352)
#define TARGET_NR_getrandom             (TARGET_NR_Linux + 353)
#define TARGET_NR_memfd_create          (TARGET_NR_Linux + 354)
#define TARGET_NR_bpf                   (TARGET_NR_Linux + 355)
#define TARGET_NR_execveat              (TARGET_NR_Linux + 356)
#define TARGET_NR_userfaultfd           (TARGET_NR_Linux + 357)
#define TARGET_NR_membarrier            (TARGET_NR_Linux + 358)
#define TARGET_NR_mlock2                (TARGET_NR_Linux + 359)
