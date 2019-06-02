/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIPlistMediaDatabaseEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying> {

	NSArray* _seasons;

}

@property (nonatomic,retain) NSArray * seasons;              //@synthesize seasons=_seasons - In the implementation block
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithIdentifier:(id)arg1 ;
-(id)isLocal;
-(NSArray *)seasons;
-(void)setSeasons:(NSArray *)arg1 ;
-(id)seasonForIdentifier:(id)arg1 ;
@end

