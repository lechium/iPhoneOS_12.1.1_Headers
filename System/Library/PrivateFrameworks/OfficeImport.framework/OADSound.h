/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {

	NSData* mSoundData;
	NSString* mName;
	int mSizeInBytes;

}
-(int)sizeInBytes;
-(void)setSizeInBytes:(int)arg1 ;
-(void)setSoundData:(id)arg1 ;
-(id)soundData;
-(void)dealloc;
-(BOOL)isLoaded;
-(id)name;
-(void)setName:(id)arg1 ;
-(id)description;
@end

