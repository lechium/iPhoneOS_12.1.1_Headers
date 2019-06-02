/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableSet;

@interface MusicGenreResourceImagesCatalog : NSObject {

	NSDictionary* _genreMappings;
	NSMutableSet* _unknownGenres;

}
+(id)sharedGenreResourceImagesCatalog;
-(id)_baseNameOfImageForGenreNamed:(id)arg1 ;
-(id)nameOfImageForGenreNamed:(id)arg1 ;
-(void)registerGenreResouceImages;
-(id)resourceURLForGenreNamed:(id)arg1 ;
-(id)init;
@end
