/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/TTModelAttributeComparable.h>

@class TTTodo, NSUUID, NSString;

@interface TTParagraphStyle : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, TTModelAttributeComparable> {

	BOOL _needsParagraphCleanup;
	BOOL _needsListCleanup;
	unsigned _style;
	unsigned _hints;
	long long _alignment;
	long long _writingDirection;
	unsigned long long _indent;
	unsigned long long _startingItemNumber;
	TTTodo* _todo;

}

@property (assign,nonatomic) unsigned style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long alignment;                                //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long writingDirection;                         //@synthesize writingDirection=_writingDirection - In the implementation block
@property (assign,nonatomic) unsigned long long indent;                          //@synthesize indent=_indent - In the implementation block
@property (assign,nonatomic) unsigned long long startingItemNumber;              //@synthesize startingItemNumber=_startingItemNumber - In the implementation block
@property (nonatomic,retain) TTTodo * todo;                                      //@synthesize todo=_todo - In the implementation block
@property (assign,nonatomic) unsigned hints;                                     //@synthesize hints=_hints - In the implementation block
@property (assign,nonatomic) BOOL needsParagraphCleanup;                         //@synthesize needsParagraphCleanup=_needsParagraphCleanup - In the implementation block
@property (assign,nonatomic) BOOL needsListCleanup;                              //@synthesize needsListCleanup=_needsListCleanup - In the implementation block
@property (nonatomic,readonly) BOOL canIndent; 
@property (nonatomic,readonly) BOOL isList; 
@property (nonatomic,readonly) BOOL isHeader; 
@property (nonatomic,readonly) BOOL uniqueToLine; 
@property (nonatomic,readonly) BOOL preferSingleLine; 
@property (nonatomic,readonly) BOOL wantsFollowingNewLine; 
@property (nonatomic,readonly) NSUUID * trackingUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)textAlignmentForParagraphStyleAlignment:(int)arg1 ;
+(int)paragraphStyleAlignmentForTextAlignment:(long long)arg1 ;
+(id)paragraphStyleNamed:(unsigned)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)defaultParagraphStyle;
-(void)saveToArchive:(ParagraphStyle*)arg1 ;
-(BOOL)isEqualToParagraphStyle:(id)arg1 ;
-(BOOL)isEqualToModelParagraphStyle:(id)arg1 ;
-(BOOL)isUnknownStyle;
-(id)listBulletInAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSUUID *)trackingUUID;
-(id)serialize;
-(BOOL)isEqualToModelComparable:(id)arg1 ;
-(unsigned long long)startingItemNumber;
-(void)setStartingItemNumber:(unsigned long long)arg1 ;
-(BOOL)isList;
-(void)setNeedsParagraphCleanup:(BOOL)arg1 ;
-(void)setNeedsListCleanup:(BOOL)arg1 ;
-(TTTodo *)todo;
-(void)setTodo:(TTTodo *)arg1 ;
-(BOOL)canIndent;
-(BOOL)wantsFollowingNewLine;
-(BOOL)needsParagraphCleanup;
-(BOOL)needsListCleanup;
-(BOOL)preferSingleLine;
-(BOOL)uniqueToLine;
-(void)setIndent:(unsigned long long)arg1 ;
-(unsigned long long)indent;
-(id)initWithArchive:(const ParagraphStyle*)arg1 ;
-(long long)alignment;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(unsigned)arg1 ;
-(unsigned)style;
-(void)setAlignment:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isHeader;
-(id)initWithData:(id)arg1 ;
-(void)setHints:(unsigned)arg1 ;
-(unsigned)hints;
-(long long)writingDirection;
-(void)setWritingDirection:(long long)arg1 ;
@end
