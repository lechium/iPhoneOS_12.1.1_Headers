/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface BSPluginSpecification : NSObject {

	NSString* _type;
	NSArray* _whitelistedNames;
	NSString* _classOrProtocolName;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy,readonly) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * requiredClassOrProtocolName;              //@synthesize classOrProtocolName=_classOrProtocolName - In the implementation block
+(id)specificationsFromHostBundle:(id)arg1 ;
-(BOOL)matchesPluginBundle:(id)arg1 ;
-(NSString *)requiredClassOrProtocolName;
-(id)initWithPlistSpecification:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)description;
-(NSString *)type;
-(BOOL)isValid;
@end

