/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSDictionary;

@interface CRKSetAdHocConfigurationRequest : CATTaskRequest {

	BOOL _merge;
	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL merge;                              //@synthesize merge=_merge - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)merge;
-(void)setMerge:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

