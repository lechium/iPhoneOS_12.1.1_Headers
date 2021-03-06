/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/CNUIUserActionItem.h>

@protocol CNTUDialRequest;
@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem {

	id<CNTUDialRequest> _dialRequest;

}

@property (nonatomic,readonly) id<CNTUDialRequest> dialRequest;              //@synthesize dialRequest=_dialRequest - In the implementation block
-(id<CNTUDialRequest>)dialRequest;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
-(id)performActionWithContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

