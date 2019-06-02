/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <HealthRecordServices/HDFHIRResourceObject.h>

@class HDHRSOriginInformation;

@interface HDOriginalFHIRResourceObject : HDFHIRResourceObject {

	HDHRSOriginInformation* _originInformation;

}

@property (nonatomic,copy,readonly) HDHRSOriginInformation * originInformation;              //@synthesize originInformation=_originInformation - In the implementation block
+(id)resourceObjectWithData:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 extractionHints:(unsigned long long)arg5 originVersion:(SCD_Struct_HD1)arg6 originBuild:(id)arg7 error:(id*)arg8 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithResourceIdentifier:(id)arg1 JSONObject:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 extractionHints:(unsigned long long)arg6 originInformation:(id)arg7 ;
-(HDHRSOriginInformation *)originInformation;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

