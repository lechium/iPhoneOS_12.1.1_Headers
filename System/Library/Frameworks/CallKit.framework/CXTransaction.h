/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSMutableOrderedSet, NSArray, NSString;

@interface CXTransaction : NSObject <CXCopying, NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSMutableOrderedSet* _mutableActions;

}

@property (nonatomic,copy) NSUUID * UUID;                                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * mutableActions;              //@synthesize mutableActions=_mutableActions - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,copy,readonly) NSArray * actions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopy;
-(NSMutableOrderedSet *)mutableActions;
-(id)allowedClassesForMutableActions;
-(void)addActionsFromTransaction:(id)arg1 ;
-(void)setMutableActions:(NSMutableOrderedSet *)arg1 ;
-(id)init;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addAction:(id)arg1 ;
-(NSArray *)actions;
-(id)initWithAction:(id)arg1 ;
-(id)initWithActions:(id)arg1 ;
-(BOOL)isComplete;
-(void)setUUID:(NSUUID *)arg1 ;
@end

