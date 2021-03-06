/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmark, NSDictionary;

@interface WebBookmarkChange : NSObject {

	int _bookmarkID;
	int _parentID;
	long long _changeType;
	WebBookmark* _bookmark;
	unsigned long long _modifiedAttributes;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (assign,nonatomic) int bookmarkID;                                              //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (assign,nonatomic) int parentID;                                                //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) long long changeType;                                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) WebBookmark * bookmark;                                    //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) unsigned long long modifiedAttributes;                     //@synthesize modifiedAttributes=_modifiedAttributes - In the implementation block
+(id)bookmarkAddChangeWithBookmark:(id)arg1 ;
+(id)bookmarkModifyChangeWithBookmark:(id)arg1 ;
-(long long)changeType;
-(BOOL)attributesMarkedAsModify:(unsigned long long)arg1 ;
-(id)initWithBookmark:(id)arg1 bookmarkID:(int)arg2 parentID:(int)arg3 changeType:(long long)arg4 ;
-(void)_setModifiedAttributesIfSupported;
-(id)initWithBookmarkID:(int)arg1 parentID:(int)arg2 changeType:(long long)arg3 ;
-(void)applyModificationsToBookmark:(id)arg1 ;
-(void)setBookmarkID:(int)arg1 ;
-(unsigned long long)modifiedAttributes;
-(int)bookmarkID;
-(int)parentID;
-(WebBookmark *)bookmark;
-(void)setParentID:(int)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end

