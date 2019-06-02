/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest {

	BOOL _localFallback;
	BOOL _useMonogramAsLastResort;
	NSNumber* _memberDSID;
	NSString* _memberHashedDSID;
	unsigned long long _requestedSize;
	double _requiredWidth;
	double _requiredHeight;
	double _monogramDiameter;
	long long _backgroundType;
	NSString* _fullname;
	NSString* _emailAddress;
	NSString* _phoneNumber;

}

@property (assign) long long monogramStyle; 
@property (copy,readonly) NSNumber * memberDSID;                    //@synthesize memberDSID=_memberDSID - In the implementation block
@property (copy,readonly) NSString * memberHashedDSID;              //@synthesize memberHashedDSID=_memberHashedDSID - In the implementation block
@property (readonly) BOOL localFallback;                            //@synthesize localFallback=_localFallback - In the implementation block
@property (readonly) unsigned long long requestedSize;              //@synthesize requestedSize=_requestedSize - In the implementation block
@property (assign) double requiredWidth;                            //@synthesize requiredWidth=_requiredWidth - In the implementation block
@property (assign) double requiredHeight;                           //@synthesize requiredHeight=_requiredHeight - In the implementation block
@property (assign) double monogramDiameter;                         //@synthesize monogramDiameter=_monogramDiameter - In the implementation block
@property (assign) BOOL useMonogramAsLastResort;                    //@synthesize useMonogramAsLastResort=_useMonogramAsLastResort - In the implementation block
@property (assign) long long backgroundType;                        //@synthesize backgroundType=_backgroundType - In the implementation block
@property (copy) NSString * fullname;                               //@synthesize fullname=_fullname - In the implementation block
@property (copy) NSString * emailAddress;                           //@synthesize emailAddress=_emailAddress - In the implementation block
@property (copy) NSString * phoneNumber;                            //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)requestOptions;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)requiredHeight;
-(long long)backgroundType;
-(void)setBackgroundType:(long long)arg1 ;
-(id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 connectionProvider:(id)arg4 ;
-(id)initWithConnectionProvider:(id)arg1 ;
-(id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 connectionProvider:(id)arg4 ;
-(BOOL)useMonogramAsLastResort;
-(NSString *)memberHashedDSID;
-(BOOL)localFallback;
-(id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 ;
-(double)requiredWidth;
-(void)setRequiredWidth:(double)arg1 ;
-(void)setRequiredHeight:(double)arg1 ;
-(void)setFullname:(NSString *)arg1 ;
-(long long)monogramStyle;
-(void)setMonogramStyle:(long long)arg1 ;
-(id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 ;
-(void)setUseMonogramAsLastResort:(BOOL)arg1 ;
-(NSNumber *)memberDSID;
-(void)setMonogramDiameter:(double)arg1 ;
-(double)monogramDiameter;
-(NSString *)fullname;
-(unsigned long long)requestedSize;
-(id)init;
-(NSString *)phoneNumber;
@end

