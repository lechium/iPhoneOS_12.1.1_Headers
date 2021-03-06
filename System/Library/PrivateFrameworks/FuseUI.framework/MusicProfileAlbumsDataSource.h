/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicMediaQueryDataSource.h>

@class NSArray;

@interface MusicProfileAlbumsDataSource : MusicMediaQueryDataSource {

	NSArray* _sectionEntities;
	vector<_NSRange, std::__1::allocator<_NSRange> >* _sectionRanges;

}
-(id)entities;
-(BOOL)showsIndexBar;
-(BOOL)usesSections;
-(id)sectionEntities;
-(void)_invalidateCalculatedEntities;
-(id)localizedSectionTitleAtIndex:(unsigned long long)arg1 ;
-(NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
@end

