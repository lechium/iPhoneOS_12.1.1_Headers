/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDialog.h>

@class NSLock, SSPaymentSheet, NSString;

@interface ISTouchIDDialog : ISDialog {

	NSLock* _lock;
	BOOL _isFree;
	SSPaymentSheet* _paymentSheet;
	NSString* _body;
	NSString* _username;

}

@property (nonatomic,copy) NSString * body;                   //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * username;               //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL isFree;                     //@synthesize isFree=_isFree - In the implementation block
@property (copy) NSString * fallbackExplanation; 
@property (copy) NSString * fallbackMessage; 
-(id)paymentSheet;
-(void)_parseDialogDictionary:(id)arg1 ;
-(void)setIsFree:(BOOL)arg1 ;
-(NSString *)fallbackExplanation;
-(NSString *)fallbackMessage;
-(void)setFallbackExplanation:(NSString *)arg1 ;
-(void)setFallbackMessage:(NSString *)arg1 ;
-(id)buttonForButtonType:(long long)arg1 ;
-(BOOL)isFree;
-(id)initWithDialogDictionary:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)_init;
-(NSString *)username;
@end

