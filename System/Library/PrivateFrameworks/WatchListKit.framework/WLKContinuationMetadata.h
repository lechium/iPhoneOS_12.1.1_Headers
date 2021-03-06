/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WLKPlayEvent, WLKPlayable, WLKBasicContentMetadata, NSString;

@interface WLKContinuationMetadata : NSObject {

	BOOL _isRental;
	BOOL _isPurchase;
	WLKPlayEvent* _playEvent;
	WLKPlayable* _playable;
	WLKBasicContentMetadata* _movieOrShowContent;
	WLKBasicContentMetadata* _currentEpisode;
	WLKBasicContentMetadata* _showParent;
	NSString* _context;
	NSString* _localizedContext;
	NSString* _deleteID;

}

@property (nonatomic,readonly) WLKPlayEvent * playEvent;                                  //@synthesize playEvent=_playEvent - In the implementation block
@property (nonatomic,readonly) WLKPlayable * playable;                                    //@synthesize playable=_playable - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * movieOrShowContent;              //@synthesize movieOrShowContent=_movieOrShowContent - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * currentEpisode;                  //@synthesize currentEpisode=_currentEpisode - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * showParent;                      //@synthesize showParent=_showParent - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedContext;                          //@synthesize localizedContext=_localizedContext - In the implementation block
@property (nonatomic,readonly) BOOL isRental;                                             //@synthesize isRental=_isRental - In the implementation block
@property (nonatomic,readonly) BOOL isPurchase;                                           //@synthesize isPurchase=_isPurchase - In the implementation block
@property (nonatomic,copy,readonly) NSString * deleteID;                                  //@synthesize deleteID=_deleteID - In the implementation block
-(BOOL)isPurchase;
-(WLKPlayEvent *)playEvent;
-(BOOL)isRental;
-(WLKBasicContentMetadata *)movieOrShowContent;
-(WLKBasicContentMetadata *)showParent;
-(NSString *)localizedContext;
-(NSString *)deleteID;
-(WLKBasicContentMetadata *)currentEpisode;
-(WLKPlayable *)playable;
-(id)init;
-(NSString *)context;
-(id)initWithDictionary:(id)arg1 ;
@end

