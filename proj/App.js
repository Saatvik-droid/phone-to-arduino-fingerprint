import React from 'react';
import {Button, SafeAreaView, View} from 'react-native';
import ReactNativeBiometrics from 'react-native-biometrics';
const App = () => {
  const xyz = () => {
    ReactNativeBiometrics.simplePrompt({promptMessage: 'asa'})
      .then(res => {
        console.log(res);
      })
      .catch(err => {
        console.log(err);
      });
  };
  return (
    <SafeAreaView>
      <View>
        <Button title="Login with Biometrics" color="#fe7005" onPress={xyz} />
      </View>
    </SafeAreaView>
  );
};

export default App;
