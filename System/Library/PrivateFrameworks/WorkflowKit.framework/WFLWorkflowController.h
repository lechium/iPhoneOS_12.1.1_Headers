/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFLWorkflowControllerDelegate;
@class WFLWorkflow, NSProgress, INVoiceCommandDeviceInformation, WFLActionImplementation;

@interface WFLWorkflowController : NSObject {

	BOOL _running;
	id<WFLWorkflowControllerDelegate> _delegate;
	WFLWorkflow* _workflow;
	NSProgress* _progress;
	long long _executionContext;
	INVoiceCommandDeviceInformation* _originDeviceInformation;
	unsigned long long _currentActionIndex;
	WFLActionImplementation* _currentActionImplementation;
	WFLActionImplementation* _previousActionImplementation;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;                                          //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) unsigned long long currentActionIndex;                                  //@synthesize currentActionIndex=_currentActionIndex - In the implementation block
@property (nonatomic,retain) WFLActionImplementation * currentActionImplementation;                  //@synthesize currentActionImplementation=_currentActionImplementation - In the implementation block
@property (nonatomic,retain) WFLActionImplementation * previousActionImplementation;                 //@synthesize previousActionImplementation=_previousActionImplementation - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic,__weak) id<WFLWorkflowControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFLWorkflow * workflow;                                               //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic) long long executionContext;                                             //@synthesize executionContext=_executionContext - In the implementation block
@property (nonatomic,retain) INVoiceCommandDeviceInformation * originDeviceInformation;              //@synthesize originDeviceInformation=_originDeviceInformation - In the implementation block
+(void)initialize;
-(WFLWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(void)runWithInput:(id)arg1 ;
-(void)launchAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<WFLWorkflowControllerDelegate>)arg1 ;
-(id<WFLWorkflowControllerDelegate>)delegate;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)stop;
-(BOOL)isRunning;
-(NSProgress *)progress;
-(long long)executionContext;
-(void)setExecutionContext:(long long)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)setCurrentActionIndex:(unsigned long long)arg1 ;
-(void)workflowControllerWillRun;
-(void)workflowControllerDidStopWithError:(id)arg1 ;
-(void)workflowControllerDidFinishRunningWithOutput:(id)arg1 ;
-(void)stepWithInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WFLActionImplementation *)currentActionImplementation;
-(void)setCurrentActionImplementation:(WFLActionImplementation *)arg1 ;
-(void)setPreviousActionImplementation:(WFLActionImplementation *)arg1 ;
-(WFLActionImplementation *)previousActionImplementation;
-(unsigned long long)currentActionIndex;
-(id)userInterfaceForRunningAction:(id)arg1 ;
-(id)createImplementationForAction:(id)arg1 ;
-(void)workflowControllerDidFinishRunningAction:(id)arg1 ;
-(void)workflowControllerWillRunAction:(id)arg1 withInput:(id)arg2 proceedHandler:(/*^block*/id)arg3 ;
-(INVoiceCommandDeviceInformation *)originDeviceInformation;
-(void)setOriginDeviceInformation:(INVoiceCommandDeviceInformation *)arg1 ;
@end

