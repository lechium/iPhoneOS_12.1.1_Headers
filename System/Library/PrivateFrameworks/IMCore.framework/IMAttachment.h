/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface IMAttachment : NSObject {

	NSString* _guid;
	NSString* _path;
	BOOL _isSticker;
	BOOL _isTransferComplete;
	NSDate* _createdDate;

}
-(id)guid;
-(id)initWithPath:(id)arg1 guid:(id)arg2 ;
-(id)initWithPath:(id)arg1 guid:(id)arg2 createdDate:(id)arg3 isSticker:(BOOL)arg4 isTransferComplete:(BOOL)arg5 ;
-(id)fileTransfer;
-(BOOL)isSticker;
-(id)createdDate;
-(BOOL)isTransferComplete;
-(id)description;
-(id)path;
@end

