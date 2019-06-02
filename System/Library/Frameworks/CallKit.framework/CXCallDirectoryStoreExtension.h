/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CXCallDirectoryStoreExtension : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _primaryKey;
	long long _priority;
	long long _state;
	NSDate* _stateLastModified;

}

@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long primaryKey;                    //@synthesize primaryKey=_primaryKey - In the implementation block
@property (assign,nonatomic) long long priority;                      //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSDate * stateLastModified;              //@synthesize stateLastModified=_stateLastModified - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)primaryKey;
-(void)setPrimaryKey:(long long)arg1 ;
-(void)setStateLastModified:(NSDate *)arg1 ;
-(NSDate *)stateLastModified;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)state;
-(void)setPriority:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)priority;
-(void)setState:(long long)arg1 ;
@end

