/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@interface SUInstallationConstraintMonitorRestoreFromICloud : SUInstallationConstraintMonitorBase {

	BOOL _queue_isRestoring;
	int _queue_restoreToken;

}
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(void)_queue_restoreStateChanged;
-(void)dealloc;
@end

