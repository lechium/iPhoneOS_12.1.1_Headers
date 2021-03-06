/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFMailSignatureController : NSObject
-(void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(BOOL)arg3 ;
-(void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isDefaultSignatureForSender:(id)arg1 ;
-(void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(void)getDocument:(id)arg1 withHiddenSignatureHandler:(/*^block*/id)arg2 ;
-(id)_signatureStringForSender:(id)arg1 ;
@end

