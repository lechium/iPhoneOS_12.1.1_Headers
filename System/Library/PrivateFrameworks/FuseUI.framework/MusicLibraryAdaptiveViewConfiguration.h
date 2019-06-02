/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryViewConfiguration.h>

@class MusicLibraryViewConfiguration;

@interface MusicLibraryAdaptiveViewConfiguration : MusicLibraryViewConfiguration {

	MusicLibraryViewConfiguration* _compactWidthConfiguration;
	MusicLibraryViewConfiguration* _regularWidthConfiguration;

}

@property (nonatomic,readonly) MusicLibraryViewConfiguration * compactWidthConfiguration; 
@property (nonatomic,readonly) MusicLibraryViewConfiguration * regularWidthConfiguration; 
-(MusicLibraryViewConfiguration *)compactWidthConfiguration;
-(MusicLibraryViewConfiguration *)regularWidthConfiguration;
-(void)enumerateContentViewConfigurationsUsingBlock:(/*^block*/id)arg1 ;
-(id)loadCompactWidthConfiguration;
-(id)loadRegularWidthConfiguration;
-(id)init;
@end
