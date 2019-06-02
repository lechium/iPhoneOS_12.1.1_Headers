/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/_DPJSONString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface _DPCMSRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding> {

	BOOL _submitted;
	double _creationDate;
	NSString* _key;
	long long _reportVersion;
	NSManagedObjectID* _objectId;

}

@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long reportVersion;                   //@synthesize reportVersion=_reportVersion - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(id)createRecordFromManagedObject:(id)arg1 ;
+(id)entityName;
+(BOOL)supportsSecureCoding;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 creationDate:(double)arg2 submitted:(BOOL)arg3 objectId:(id)arg4 ;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(BOOL)isEqualToCMSRecord:(id)arg1 ;
-(id)jsonString;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(id)entityName;
-(NSManagedObjectID *)objectId;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(long long)reportVersion;
-(void)setReportVersion:(long long)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)submitted;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
@end

