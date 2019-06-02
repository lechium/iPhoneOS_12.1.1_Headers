/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityValueProviding.h>

@class NSMutableDictionary, UIImage, MusicProductDescription, NSString;

@interface MusicPlaylistEditingEntityValueProvider : NSObject <MusicEntityValueProviding> {

	NSMutableDictionary* _properties;
	UIImage* _artworkImage;

}

@property (nonatomic,retain) UIImage * artworkImage;                                  //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy) MusicProductDescription * productDescription; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)artworkImage;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(void)setProductDescription:(MusicProductDescription *)arg1 ;
-(MusicProductDescription *)productDescription;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

