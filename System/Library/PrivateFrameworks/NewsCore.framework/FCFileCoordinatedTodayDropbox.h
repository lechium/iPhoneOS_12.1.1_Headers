/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayDropbox : NSObject {

	FCFileCoordinatedDictionary* _fileCoordinatedDictionary;

}

@property (nonatomic,retain) FCFileCoordinatedDictionary * fileCoordinatedDictionary;              //@synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary - In the implementation block
-(FCFileCoordinatedDictionary *)fileCoordinatedDictionary;
-(void)peekWithAccessor:(/*^block*/id)arg1 ;
-(void)depositWithAccessor:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFileCoordinatedDictionary:(FCFileCoordinatedDictionary *)arg1 ;
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
@end

