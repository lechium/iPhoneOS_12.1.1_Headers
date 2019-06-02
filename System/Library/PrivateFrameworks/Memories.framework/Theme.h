/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface Theme : NSObject {

	NSString* m_themeID;

}

@property (nonatomic,readonly) NSString * themeID; 
@property (nonatomic,readonly) NSString * trailerID; 
@property (nonatomic,readonly) UIImage * previewImage; 
@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)themeIDIsTrailer:(id)arg1 ;
+(id)themeWithID:(id)arg1 ;
+(id)trailerIDFromThemeID:(id)arg1 ;
+(id)themeIDs;
+(id)themeIDFromTrailerID:(id)arg1 ;
-(UIImage *)previewImage;
-(id)posterImage;
-(id)musicName;
-(id)micaFileBaseName;
-(NSString *)themeID;
-(id)micaFileNameForTitleNamed:(id)arg1 ;
-(id)initWithThemeID:(id)arg1 ;
-(NSString *)trailerID;
-(id)micaFileNameForTransitionName:(id)arg1 transitionDirection:(int)arg2 ;
-(id)micaFileNameForCutawayName:(id)arg1 cutawayDirection:(int)arg2 ;
-(id)displayNameForTransitionName:(id)arg1 ;
-(NSString *)displayName;
@end

