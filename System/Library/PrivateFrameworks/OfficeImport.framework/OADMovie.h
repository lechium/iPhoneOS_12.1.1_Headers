/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

@interface OADMovie : OCDDelayedMedia {

	NSData* mData;
	NSString* mName;
	float mStart;
	float mEnd;
	BOOL mIsAudioOnly;
	BOOL loop;

}

@property (retain) NSData * data; 
@property (retain) NSString * name; 
@property (assign) BOOL isAudioOnly; 
@property (assign) BOOL loop; 
@property (assign) float movieStartPoint; 
@property (assign) float movieEndPoint; 
-(BOOL)isAudioOnly;
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(float)movieStartPoint;
-(void)setMovieStartPoint:(float)arg1 ;
-(float)movieEndPoint;
-(void)setMovieEndPoint:(float)arg1 ;
-(BOOL)loop;
-(void)setLoop:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

