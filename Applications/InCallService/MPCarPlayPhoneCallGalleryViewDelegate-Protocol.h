//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PHCarPlayPhoneCallGalleryView, TUCall;

@protocol MPCarPlayPhoneCallGalleryViewDelegate <NSObject>
- (TUCall *)representativePhoneCallForConferenceForGalleryView:(PHCarPlayPhoneCallGalleryView *)arg1;
- (NSArray *)allConferenceParticipantCalls;
- (NSArray *)conferenceParticipantCallsForPhoneCall:(TUCall *)arg1;
- (NSArray *)primaryPhoneCallsForGalleryView:(PHCarPlayPhoneCallGalleryView *)arg1;
@end

