/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSData;


@protocol NUImageExportResult <NUExportResult>
@property (readonly) NSURL * destinationURL; 
@property (readonly) NSData * destinationData; 
@required
-(NSData *)destinationData;
-(NSURL *)destinationURL;

@end

