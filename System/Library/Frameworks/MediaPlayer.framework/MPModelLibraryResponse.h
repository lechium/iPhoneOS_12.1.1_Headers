/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelResponse.h>
#import <libobjc.A.dylib/MPModelResponseDetailedKeepLocalStatusRequesting.h>

@class NSArray, MPMediaLibraryConnectionAssertion, NSString;

@interface MPModelLibraryResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting> {

	NSArray* _sectionKeepLocalStatusConfigurations;
	MPMediaLibraryConnectionAssertion* _libraryAssertion;

}

@property (nonatomic,copy) NSArray * sectionKeepLocalStatusConfigurations;                      //@synthesize sectionKeepLocalStatusConfigurations=_sectionKeepLocalStatusConfigurations - In the implementation block
@property (nonatomic,retain) MPMediaLibraryConnectionAssertion * libraryAssertion;              //@synthesize libraryAssertion=_libraryAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLibraryAssertion:(MPMediaLibraryConnectionAssertion *)arg1 ;
-(void)setSectionKeepLocalStatusConfigurations:(NSArray *)arg1 ;
-(NSArray *)sectionKeepLocalStatusConfigurations;
-(id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(/*^block*/id)arg2 ;
-(MPMediaLibraryConnectionAssertion *)libraryAssertion;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)initWithRequest:(id)arg1 ;
@end

