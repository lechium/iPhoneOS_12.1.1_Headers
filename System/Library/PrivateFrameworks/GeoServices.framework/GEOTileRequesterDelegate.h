/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTileRequesterDelegate
@required
-(void)tileRequester:(id)arg1 receivedError:(id)arg2;
-(void)tileRequesterFinished:(id)arg1;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7;

@end

