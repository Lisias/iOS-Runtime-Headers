/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoShareabilityProvider : NSObject <SXVideoShareabilityProviding> {
    bool  _sharingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSharingEnabled, nonatomic, readonly) bool sharingEnabled;
@property (readonly) Class superclass;

- (id)init;
- (id)initWithSharingEnabled:(bool)arg1;
- (bool)isSharingEnabled;
- (bool)isVideoShareable:(id)arg1;

@end