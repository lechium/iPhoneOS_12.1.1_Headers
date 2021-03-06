/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FAButtonSpecification : NSObject <NSCopying> {

	NSString* _title;
	long long _action;
	NSDictionary* _parameters;

}

@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(id)initWithTitle:(id)arg1 action:(long long)arg2 parameters:(id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
@end

