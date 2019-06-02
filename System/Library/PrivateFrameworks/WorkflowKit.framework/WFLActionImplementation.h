/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFLActionUserInterface;
@class WFLAction, NSArray, NSProgress, INVoiceCommandDeviceInformation;

@interface WFLActionImplementation : NSObject {

	WFLAction* _action;
	NSArray* _input;
	id<WFLActionUserInterface> _userInterface;
	NSProgress* _progress;
	NSArray* _output;
	long long _executionContext;
	/*^block*/id _completionHandler;
	INVoiceCommandDeviceInformation* _originDeviceInformation;

}

@property (nonatomic,copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) INVoiceCommandDeviceInformation * originDeviceInformation;              //@synthesize originDeviceInformation=_originDeviceInformation - In the implementation block
@property (nonatomic,readonly) WFLAction * action;                                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSArray * input;                                                      //@synthesize input=_input - In the implementation block
@property (nonatomic,__weak,readonly) id<WFLActionUserInterface> userInterface;                      //@synthesize userInterface=_userInterface - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                                //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSArray * output;                                                       //@synthesize output=_output - In the implementation block
@property (assign,nonatomic) long long executionContext;                                             //@synthesize executionContext=_executionContext - In the implementation block
+(id)userCancelledError;
+(void)initialize;
-(NSArray *)output;
-(void)setOutput:(NSArray *)arg1 ;
-(void)launchAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFLAction *)action;
-(NSProgress *)progress;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSArray *)input;
-(long long)executionContext;
-(void)setExecutionContext:(long long)arg1 ;
-(void)run;
-(void)finishRunningWithError:(id)arg1 ;
-(id<WFLActionUserInterface>)userInterface;
-(void)cancelRunning;
-(void)runAction:(id)arg1 withInput:(id)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(INVoiceCommandDeviceInformation *)originDeviceInformation;
-(void)setOriginDeviceInformation:(INVoiceCommandDeviceInformation *)arg1 ;
@end

