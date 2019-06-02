/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryAlbumAppDataChangeRequest;

@interface MPModelLibraryAlbumAppDataChangeRequestOperation : MPAsyncOperation {

	/*^block*/id _responseHandler;
	MPModelLibraryAlbumAppDataChangeRequest* _request;

}

@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) MPModelLibraryAlbumAppDataChangeRequest * request;              //@synthesize request=_request - In the implementation block
-(void)setRequest:(MPModelLibraryAlbumAppDataChangeRequest *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
-(MPModelLibraryAlbumAppDataChangeRequest *)request;
@end
