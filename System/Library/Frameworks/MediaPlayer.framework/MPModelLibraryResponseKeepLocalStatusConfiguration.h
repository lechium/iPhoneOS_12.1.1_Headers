/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPModelLibraryResponseKeepLocalStatusConfiguration : NSObject {

	/*^block*/id _downloadablePlaylistItemEntityQueryBlock;
	shared_ptr<mlcore::EntityQuery>* _downloadableItemsQuery;

}

@property (nonatomic,copy) id downloadablePlaylistItemEntityQueryBlock;                            //@synthesize downloadablePlaylistItemEntityQueryBlock=_downloadablePlaylistItemEntityQueryBlock - In the implementation block
@property (assign,nonatomic) shared_ptr<mlcore::EntityQuery>* downloadableItemsQuery;              //@synthesize downloadableItemsQuery=_downloadableItemsQuery - In the implementation block
-(void)setDownloadablePlaylistItemEntityQueryBlock:(id)arg1 ;
-(void)setDownloadableItemsQuery:(shared_ptr<mlcore::EntityQuery>*)arg1 ;
-(shared_ptr<mlcore::EntityQuery>*)downloadableItemsQuery;
-(id)downloadablePlaylistItemEntityQueryBlock;
@end

