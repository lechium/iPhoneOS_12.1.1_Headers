/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BKOperation.h>

@class BKIdentity, NSData;

@interface BKExtendEnrollTouchIDOperation : BKOperation {

	BKIdentity* _identity;
	NSData* _credentialSet;

}

@property (assign,nonatomic,__weak) id<BKExtendEnrollTouchIDOperationDelegate> delegate; 
@property (nonatomic,retain) BKIdentity * identity;                                                   //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) NSData * credentialSet;                                                    //@synthesize credentialSet=_credentialSet - In the implementation block
-(void)setCredentialSet:(NSData *)arg1 ;
-(void)startBioOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(NSData *)credentialSet;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(BKIdentity *)identity;
-(void)setIdentity:(BKIdentity *)arg1 ;
@end
