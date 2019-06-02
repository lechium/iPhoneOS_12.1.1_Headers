/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIClientDelegate.h>
#import <RTTUtilities/RTTCallDelegate.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegate.h>

@protocol OS_dispatch_queue, HCHeardControllerProtocol;
@class AXUIClient, NSObject, NSMutableArray, NSString;

@interface RTTController : NSObject <AXUIClientDelegate, RTTCallDelegate, TUCallCapabilitiesDelegate> {

	AXUIClient* _actionUIClient;
	NSObject*<OS_dispatch_queue> _workerQueue;
	BOOL _shouldSuppressIncomingNotification;
	NSMutableArray* _rttCalls;
	id<HCHeardControllerProtocol> _delegate;
	/*^block*/id _actionCompletionBlock;

}

@property (nonatomic,copy) id actionCompletionBlock;                                     //@synthesize actionCompletionBlock=_actionCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressIncomingNotification;                    //@synthesize shouldSuppressIncomingNotification=_shouldSuppressIncomingNotification - In the implementation block
@property (nonatomic,retain) NSMutableArray * rttCalls;                                  //@synthesize rttCalls=_rttCalls - In the implementation block
@property (assign,nonatomic,__weak) id<HCHeardControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)didChangeTelephonyCallingSupport;
-(void)callDidConnect:(id)arg1 ;
-(void)setShouldSuppressIncomingNotification:(BOOL)arg1 ;
-(id)displayCallPrompt:(id)arg1 ;
-(id)handleDatabaseRequest:(id)arg1 ;
-(id)handleDictionaryRequest:(id)arg1 ;
-(id)handleSettingsRequest:(id)arg1 ;
-(id)handleIncomingNotificationSuppressionChange:(id)arg1 ;
-(void)setActionCompletionBlock:(id)arg1 ;
-(id)actionCompletionBlock;
-(void)handleUpdatedCalls:(id)arg1 ;
-(id)callForUUID:(id)arg1 ;
-(void)displayRTTFirstUseAlert;
-(id)actionClient;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3 ;
-(void)dismissRTTFirstUseAlert;
-(BOOL)shouldSuppressIncomingNotification;
-(void)setRttCalls:(NSMutableArray *)arg1 ;
-(NSMutableArray *)rttCalls;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<HCHeardControllerProtocol>)arg1 ;
-(id<HCHeardControllerProtocol>)delegate;
@end

