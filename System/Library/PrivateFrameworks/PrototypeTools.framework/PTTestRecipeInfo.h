/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSIndexSet;

@interface PTTestRecipeInfo : NSObject <NSSecureCoding> {

	NSString* _uniqueIdentifier;
	NSString* _domainIdentifier;
	NSString* _title;
	NSIndexSet* _events;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * domainIdentifier;              //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSIndexSet * events;                      //@synthesize events=_events - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTestRecipe:(id)arg1 domainIdentifier:(id)arg2 ;
-(NSIndexSet *)events;
-(NSString *)domainIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(NSString *)uniqueIdentifier;
@end
