/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface TTYUtterance : NSObject <NSSecureCoding> {

	BOOL _isMe;
	NSString* _contactPath;
	NSString* _text;
	NSDate* _lastChangeDate;

}

@property (nonatomic,retain) NSString * contactPath;               //@synthesize contactPath=_contactPath - In the implementation block
@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSDate * lastChangeDate;              //@synthesize lastChangeDate=_lastChangeDate - In the implementation block
@property (assign,nonatomic) BOOL isMe;                            //@synthesize isMe=_isMe - In the implementation block
+(id)utteranceWithContactPath:(id)arg1 andText:(id)arg2 ;
+(BOOL)contactPathIsMe:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)hasTimedOut;
-(void)setIsMe:(BOOL)arg1 ;
-(BOOL)isMe;
-(void)updateText:(id)arg1 ;
-(NSString *)contactPath;
-(void)resetTimeout;
-(void)setContactPath:(NSString *)arg1 ;
-(void)setLastChangeDate:(NSDate *)arg1 ;
-(NSDate *)lastChangeDate;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(BOOL)isComplete;
@end

