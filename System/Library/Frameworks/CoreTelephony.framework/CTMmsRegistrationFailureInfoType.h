/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTMmsRegistrationFailureInfoType : NSObject <NSCopying, NSSecureCoding> {

	BOOL _dataActive;
	BOOL _isDataAttached;
	BOOL _activationForMms;
	NSNumber* _pdpContextId;

}

@property (nonatomic,retain) NSNumber * pdpContextId;              //@synthesize pdpContextId=_pdpContextId - In the implementation block
@property (assign,nonatomic) BOOL dataActive;                      //@synthesize dataActive=_dataActive - In the implementation block
@property (assign,nonatomic) BOOL isDataAttached;                  //@synthesize isDataAttached=_isDataAttached - In the implementation block
@property (assign,nonatomic) BOOL activationForMms;                //@synthesize activationForMms=_activationForMms - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPdpContextId:(NSNumber *)arg1 ;
-(void)setIsDataAttached:(BOOL)arg1 ;
-(void)setActivationForMms:(BOOL)arg1 ;
-(NSNumber *)pdpContextId;
-(BOOL)isDataAttached;
-(BOOL)activationForMms;
-(BOOL)isEqualToCTMmsRegistrationFailureInfoType:(id)arg1 ;
-(BOOL)dataActive;
-(void)setDataActive:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

