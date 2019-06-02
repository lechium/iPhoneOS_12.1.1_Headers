/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageLoadingContextEvent, MFMessageLoadingContext, MFMessageSigner;

@interface MFMessageLoadingContextSMIMEInfo : NSObject {

	MFMessageLoadingContextEvent* _loadEvent;

}

@property (nonatomic,__weak,readonly) MFMessageLoadingContext * context; 
@property (nonatomic,readonly) MFMessageLoadingContextEvent * loadEvent;                     //@synthesize loadEvent=_loadEvent - In the implementation block
@property (nonatomic,readonly) MFMessageSigner * firstSigner; 
@property (getter=isMessageSigned,nonatomic,readonly) BOOL messageSigned; 
@property (getter=isMessageEncrypted,nonatomic,readonly) BOOL messageEncrypted; 
+(id)smimeInfoForLoadEvent:(id)arg1 ;
-(BOOL)isMessageSigned;
-(BOOL)isMessageEncrypted;
-(id)signers;
-(MFMessageLoadingContextEvent *)loadEvent;
-(void)reevaluateTrustWithNetworkAccessAllowed;
-(id)initWithLoadEvent:(id)arg1 ;
-(MFMessageSigner *)firstSigner;
-(void)dealloc;
-(MFMessageLoadingContext *)context;
@end

