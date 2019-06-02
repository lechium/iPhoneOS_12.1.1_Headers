/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRCMediaRemoteKeyboardAdapterDelegate;
@class _TVRCMRTelevisionWrapper, NSString, NSMutableArray, NSTimer;

@interface _TVRCMediaRemoteKeyboardAdapter : NSObject {

	_TVRCMRTelevisionWrapper* _television;
	id<_TVRCMediaRemoteKeyboardAdapterDelegate> _delegate;
	NSString* _text;
	NSMutableArray* _typedStringsAwaitingAcknowledgement;
	NSTimer* _acknowledgementTimer;

}

@property (nonatomic,copy) NSString * text;                                                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSMutableArray * typedStringsAwaitingAcknowledgement;                     //@synthesize typedStringsAwaitingAcknowledgement=_typedStringsAwaitingAcknowledgement - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * acknowledgementTimer;                                    //@synthesize acknowledgementTimer=_acknowledgementTimer - In the implementation block
@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                                    //@synthesize television=_television - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRCMediaRemoteKeyboardAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(_TVRCMRTelevisionWrapper *)television;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)userEnteredText:(id)arg1 ;
-(void)sessionBeganWithInitialText:(id)arg1 ;
-(void)sessionEnded;
-(void)receivedRemotelyUpdatedText:(id)arg1 ;
-(void)_acknowledgementTimerExpired:(id)arg1 ;
-(void)_resetTextValueToSessionValue;
-(NSMutableArray *)typedStringsAwaitingAcknowledgement;
-(void)setTypedStringsAwaitingAcknowledgement:(NSMutableArray *)arg1 ;
-(NSTimer *)acknowledgementTimer;
-(void)setAcknowledgementTimer:(NSTimer *)arg1 ;
-(id)init;
-(void)setDelegate:(id<_TVRCMediaRemoteKeyboardAdapterDelegate>)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(id<_TVRCMediaRemoteKeyboardAdapterDelegate>)delegate;
@end

