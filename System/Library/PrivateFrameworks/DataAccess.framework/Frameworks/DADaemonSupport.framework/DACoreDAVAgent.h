/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonSupport/DABabysittable.h>

@class CoreDAVOptionsTask, NSTimer, NSString;

@interface DACoreDAVAgent : DAAgent <DABabysittable> {

	CoreDAVOptionsTask* _optionsProbe;
	NSTimer* _optionsTimeoutTimer;

}

@property (nonatomic,retain) CoreDAVOptionsTask * optionsProbe;              //@synthesize optionsProbe=_optionsProbe - In the implementation block
@property (nonatomic,retain) NSTimer * optionsTimeoutTimer;                  //@synthesize optionsTimeoutTimer=_optionsTimeoutTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 ;
-(id)waiterID;
-(NSTimer *)optionsTimeoutTimer;
-(void)setOptionsTimeoutTimer:(NSTimer *)arg1 ;
-(void)_cancelOptionsTimer;
-(CoreDAVOptionsTask *)optionsProbe;
-(void)setOptionsProbe:(CoreDAVOptionsTask *)arg1 ;
-(void)_serverProbeTimedOut;
-(void)_probeAndSyncWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

