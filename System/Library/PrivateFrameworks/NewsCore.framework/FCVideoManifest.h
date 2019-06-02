/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface FCVideoManifest : NSObject {

	NSURL* _videoURL;
	NSString* _articleID;

}

@property (nonatomic,copy) NSString * articleID;              //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                //@synthesize videoURL=_videoURL - In the implementation block
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id)initWithArticleID:(id)arg1 videoURL:(id)arg2 ;
-(id)init;
@end

