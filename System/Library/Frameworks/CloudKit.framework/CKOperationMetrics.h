/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKMetric;

@interface CKOperationMetrics : NSObject <NSCopying, NSSecureCoding> {

	CKMetric* _cloudKitMetrics;
	CKMetric* _MMCSMetrics;

}

@property (nonatomic,retain) CKMetric * cloudKitMetrics;              //@synthesize cloudKitMetrics=_cloudKitMetrics - In the implementation block
@property (nonatomic,retain) CKMetric * MMCSMetrics;                  //@synthesize MMCSMetrics=_MMCSMetrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)unionMetrics:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)setCloudKitMetrics:(CKMetric *)arg1 ;
-(CKMetric *)MMCSMetrics;
-(void)setMMCSMetrics:(CKMetric *)arg1 ;
-(CKMetric *)cloudKitMetrics;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

