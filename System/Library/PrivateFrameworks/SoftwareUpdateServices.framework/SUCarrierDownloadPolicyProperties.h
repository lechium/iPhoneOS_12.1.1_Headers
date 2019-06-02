/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(id)_numberForKey:(id)arg1 ;
-(long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(BOOL)_isValidHour:(long long)arg1 ;
-(id)_carrierSUProperties;
-(BOOL)isDownloadFree;
-(BOOL)isDownloadAllowable;
-(BOOL)isDownloadAllowableOver2G;
-(BOOL)isAutoDownloadAllowable;
-(long long)maximumDownloadSizeInBytes;
-(unsigned long long)numberOfDaysToWaitForCellularAutoDownload;
-(long long)peakStartHour;
-(long long)peakEndHour;
-(unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
