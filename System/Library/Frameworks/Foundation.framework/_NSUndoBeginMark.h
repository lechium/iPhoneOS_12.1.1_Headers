/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSUndoObject.h>

@interface _NSUndoBeginMark : _NSUndoObject {

	id _groupIdentifier;
	BOOL _isDiscardable;

}
-(BOOL)isBeginMark;
-(BOOL)isDiscardable;
-(void)setDiscardable:(BOOL)arg1 ;
-(id)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end

