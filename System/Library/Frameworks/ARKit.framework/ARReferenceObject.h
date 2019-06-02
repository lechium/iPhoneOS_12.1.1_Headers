/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ARPointCloud, NSUUID, NSData;

@interface ARReferenceObject : NSObject <NSSecureCoding> {

	NSString* _name;
	ARPointCloud* _rawFeaturePoints;
	NSUUID* _identifier;
	long long _version;
	NSData* _trackingData;
	 _center;
	 _extent;
	SCD_Struct_AR16 _referenceOriginTransform;

}

@property (nonatomic,readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long version;                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSData * trackingData;                                 //@synthesize trackingData=_trackingData - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR16 referenceOriginTransform;              //@synthesize referenceOriginTransform=_referenceOriginTransform - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly)  center;                                               //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly)  extent;                                               //@synthesize extent=_extent - In the implementation block
@property (nonatomic,readonly)  scale; 
@property (nonatomic,readonly) ARPointCloud * rawFeaturePoints;                       //@synthesize rawFeaturePoints=_rawFeaturePoints - In the implementation block
+(id)referenceObjectsInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3 ;
+(id)referenceObjectsInGroupNamed:(id)arg1 catalog:(id)arg2 ;
+(id)referenceObjectsInGroupNamed:(id)arg1 bundle:(id)arg2 ;
+(id)referenceObjectsInGroupNamed:(id)arg1 catalogURL:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSData *)trackingData;
-(SCD_Struct_AR16)referenceOriginTransform;
-(ARPointCloud *)rawFeaturePoints;
-(id)initWithTrackingData:(id)arg1 referenceOriginTransform:(SCD_Struct_AR16)arg2 ;
-(id)initWithArchiveURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)exportObjectToURL:(id)arg1 previewImage:(id)arg2 error:(id*)arg3 ;
-(id)referenceObjectByApplyingTransform:(SCD_Struct_AR16)arg1 ;
-(id)referenceObjectByMergingObject:(id)arg1 error:(id*)arg2 ;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-()scale;
-(unsigned long long)hash;
-(id)description;
-()center;
-(long long)version;
-()extent;
@end
