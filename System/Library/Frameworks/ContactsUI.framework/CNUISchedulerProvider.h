/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNSchedulerProvider.h>

@protocol CNSchedulerProvider, CNScheduler;
@class CNSuspendableSchedulerDecorator, NSString;

@interface CNUISchedulerProvider : NSObject <CNSchedulerProvider> {

	id<CNSchedulerProvider> _schedulerProvider;
	CNSuspendableSchedulerDecorator* _suspendableBackgroundScheduler;
	id<CNScheduler> _afterCACommitScheduler;

}

@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                     //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * suspendableBackgroundScheduler;              //@synthesize suspendableBackgroundScheduler=_suspendableBackgroundScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> afterCACommitScheduler;                                        //@synthesize afterCACommitScheduler=_afterCACommitScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler; 
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler; 
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler; 
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler; 
+(id)makeBackgroundScheduler;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)newSerialSchedulerWithName:(id)arg1 ;
-(id<CNScheduler>)backgroundScheduler;
-(void)suspendBackgroundScheduler;
-(id<CNScheduler>)afterCACommitScheduler;
-(void)resumeBackgroundScheduler;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1 ;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id<CNScheduler>)inlineScheduler;
-(CNSuspendableSchedulerDecorator *)suspendableBackgroundScheduler;
-(id<CNScheduler>)immediateScheduler;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1 ;
-(id)newReaderWriterSchedulerWithName:(id)arg1 ;
-(id<CNScheduler>)mainThreadScheduler;
-(id)init;
@end

