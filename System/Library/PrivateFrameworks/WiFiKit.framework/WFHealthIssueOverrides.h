/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFHealthIssueOverrides : NSObject {

	BOOL _noInternetConnection;
	BOOL _hiddenNetwork;
	BOOL _commonSSID;
	BOOL _legacyPHY;
	BOOL _carrierNetwork;
	long long _securityOverride;

}

@property (assign,nonatomic) BOOL noInternetConnection;               //@synthesize noInternetConnection=_noInternetConnection - In the implementation block
@property (assign,nonatomic) BOOL hiddenNetwork;                      //@synthesize hiddenNetwork=_hiddenNetwork - In the implementation block
@property (assign,nonatomic) BOOL commonSSID;                         //@synthesize commonSSID=_commonSSID - In the implementation block
@property (assign,nonatomic) BOOL legacyPHY;                          //@synthesize legacyPHY=_legacyPHY - In the implementation block
@property (assign,nonatomic) BOOL carrierNetwork;                     //@synthesize carrierNetwork=_carrierNetwork - In the implementation block
@property (assign,nonatomic) long long securityOverride;              //@synthesize securityOverride=_securityOverride - In the implementation block
-(BOOL)hiddenNetwork;
-(long long)securityOverride;
-(BOOL)noInternetConnection;
-(BOOL)legacyPHY;
-(BOOL)commonSSID;
-(BOOL)carrierNetwork;
-(void)setNoInternetConnection:(BOOL)arg1 ;
-(void)setHiddenNetwork:(BOOL)arg1 ;
-(void)setCommonSSID:(BOOL)arg1 ;
-(void)setLegacyPHY:(BOOL)arg1 ;
-(void)setCarrierNetwork:(BOOL)arg1 ;
-(void)setSecurityOverride:(long long)arg1 ;
@end

