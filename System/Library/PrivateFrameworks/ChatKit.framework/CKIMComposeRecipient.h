/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <MessageUI/MFComposeRecipient.h>
#import <libobjc.A.dylib/CKIMComposeRecipient.h>

@protocol CKIMComposeRecipient <NSObject>
@required
-(void)releaseIMReferences;

@end


@class IMHandle, NSString;

@interface CKIMComposeRecipient : MFComposeRecipient <CKIMComposeRecipient> {

	IMHandle* _handle;

}

@property (nonatomic,readonly) IMHandle * handle;                   //@synthesize handle=_handle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IMHandle *)handle;
-(id)address;
-(void*)record;
-(id)uncommentedAddress;
-(id)compositeName;
-(id)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5 ;
-(void)releaseIMReferences;
-(id)initWithHandle:(id)arg1 ;
-(id)unlocalizedLabel;
-(id)supportedDragTypes;
-(id)objectForDragType:(id)arg1 ;
-(void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3 ;
-(int)property;
-(int)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(id)label;
-(id)displayString;
-(int)recordID;
@end
