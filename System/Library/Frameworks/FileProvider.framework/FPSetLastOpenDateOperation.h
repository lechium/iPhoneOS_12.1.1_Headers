/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class NSArray, NSDate;

@interface FPSetLastOpenDateOperation : FPActionOperation {

	NSArray* _items;
	NSDate* _date;

}
-(void)mainWithExtensionProxy:(id)arg1 ;
-(void)presendNotifications;
-(id)replicateForItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 date:(id)arg2 ;
@end

